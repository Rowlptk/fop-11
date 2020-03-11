// Define UI vars
const form = document.querySelector('#task-form');
const taskInput = document.querySelector('#task');
const filter = document.querySelector('#filter');
const clearBtn = document.querySelector('.clear-tasks');
const taskList = document.querySelector('.collection');


// call all event listeners
loadEventListeners();

// Load all event Listeners
function loadEventListeners() {
    // Add task Event
    form.addEventListener('submit', addTask);
    // Remove task event
    taskList.addEventListener('click', removeTask);
    // Clear task event
    clearBtn.addEventListener('click', clearTasks);
    // filter task event
    filter.addEventListener('keyup', filterTasks);
}

// filter Tasks
function filterTasks(e) {
    const text = e.target.value.toLowerCase();

    const li = document.querySelectorAll('.collection-item');
    li.forEach(function(task) {
        const item = task.firstChild.textContent.toLowerCase();
        if(item.indexOf(text) != -1)
        {
            task.style.display = 'block';
        }
        else
        {
            task.style.display = 'none';
        }
    })
}


// Clear task
function clearTasks() {
    taskList.innerHTML = '';
}

// Remove task
function removeTask(e) {
    if(e.target.parentElement.classList.contains('delete-item')) {
        if(confirm('Are you Sure?')) {
            e.target.parentElement.parentElement.remove();
        }
    } 
}

// Add task
function addTask(e) {
    if (taskInput.value === '')
    {
        alert('Add a task');
    } else {
        // create li
        const li = document.createElement('li');
        // Add class
        li.className = 'collection-item';
        // create text
        const text = document.createTextNode(taskInput.value);
        // append text
        li.appendChild(text);

        // create link
        const link = document.createElement('a');
        // Add class
        link.className = 'delete-item secondary-content';
        // Add icon html
        link.innerHTML = '<i class="fa fa-remove"></i>';

        // Append link to li
        li.appendChild(link);

        // Append li to ul
        taskList.appendChild(li);

        //console.log(link);
        //console.log(li);
    } 

    // Clear Input
    taskInput.value = '';
    e.preventDefault();   
}