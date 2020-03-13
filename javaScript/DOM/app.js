let val;

val = document;
val = document.body;
val = document.URL;

// Single element selector
val = document.getElementById('task-title');

let task = document.querySelector('#task-title');

// Change Styling
task.style.background = '#333';
task.style.color = '#fff';
task.style.padding = '20px';

// Change content
task.textContent = 'X-men';
task.innerText = 'Men in Black';
task.innerHTML = '<span style="color:yellow;">Avengers</span>'

val = document.querySelector('.card-title');
val = document.querySelector('label');
val = document.querySelector('li');
val = document.querySelector('ul li');
val = document.querySelector('li:last-child');
val = document.querySelector('li:first-child');
val = document.querySelector('li:nth-child(3)');
val = document.querySelector('li:nth-child(even)');
val = document.querySelector('li:nth-child(odd)');

// Multiple Selector, class, tag, querySelectorAll
// class selector
val = document.getElementsByClassName('collection-item');

val[1].style.color = 'red'; 
// tag selector
val = document.getElementsByTagName('li');

// querySelectorAll
val = document.querySelectorAll('ul.collection li.collection-item');

val = document.querySelectorAll('li:nth-child(odd)');
let val1 = document.querySelectorAll('li:nth-child(even)');

// loop ==> forEach
val.forEach(function(item, index) {
    item.style.background = '#ccc';
    item.textContent = `Hello : ${index}`;
})
val1.forEach(function(item, index) {
    item.style.background = '#aaa';
    item.textContent = `Hello : ${index + 3}`;
})


console.log(val);
console.log(task);