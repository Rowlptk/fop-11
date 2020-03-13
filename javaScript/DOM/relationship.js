const list = document.querySelector('ul.collection');
const listItem = document.querySelector('li.collection-item:first-child');

let val;


val = list.childNodes;
val = list.children;
val = list.children[0];

list.children[3].children[0].id = 'task-link';

val = list.children[3];

val = list.firstElementChild;
val = list.lastElementChild;

val = listItem.parentElement;
val = listItem.parentElement.parentElement;

val = listItem.nextElementSibling;
val = listItem.nextElementSibling.nextElementSibling;
val = listItem.nextElementSibling.nextElementSibling.previousElementSibling;

console.log(val);