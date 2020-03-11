let val;

val = document;
val = document.body;
val = document.URL;

// document.getElementById() ==> single element selector
val = document.getElementById('main');

let task = document.querySelector('#task-title');

// Change Styling
task.style.background = '#333';
task.style.color = '#fff';
task.style.padding = '5px';

// change content
task.textContent = 'X-men';
task.innerText = 'Men in Black';
task.innerHTML = '<span style="color: yellow;">Avengers</span>';


val = document.querySelector('.card-title');
val = document.querySelector('h5');
val = document.querySelector('li');
val = document.querySelector('ul li');
val = document.querySelector('li:last-child');
val = document.querySelector('li:first-child');
val = document.querySelector('li:nth-child(3)');
val = document.querySelector('li:nth-child(even)');
val = document.querySelector('li:nth-child(odd)');

// multiple element selector
// class selector
val = document.getElementsByClassName('collection-item');

val[1].style.color = 'yellow';

// tag selector
val = document.getElementsByTagName('li');

// querySelectorAll
val = document.querySelectorAll('ul.collection li.collection-item:nth-child(odd)');

val.forEach(function(item, index){
    item.textContent = `${index} : Hello`;
    item.style.background = '#ccc';
})

const list = document.querySelector('ul.collection');
const listItem = document.querySelector('li.collection-item:first-child');

val = list.children[1];
list.children[1].textContent = 'Hello';
list.children[3].children[0].id = 'task-link';
val = list.children[3].children[0];

val = list.firstElementChild;
val = list.lastElementChild;

val = listItem.parentElement;
val = listItem.parentElement.parentElement;

val = listItem.nextElementSibling;
val = listItem.nextElementSibling.nextElementSibling.previousElementSibling;







// to be continued... 

console.log(val);
//console.log(task);