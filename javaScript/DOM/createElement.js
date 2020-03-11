// Create Element
const li = document.createElement('li');

// Add class
li.className = 'collection-item';

// Add id;
li.id = 'new-item';

// Add attribute
li.setAttribute('title', 'New Item');

// create text 
const text = document.createTextNode('Hello World');
// const x = document.createTextNode('Hello World ');

// append
li.appendChild(text); 
// li.appendChild(x); 

// create link
const link = document.createElement('a');
// add classes
link.className = 'delete-item secondary-content';
// add icon
link.innerHTML = '<i class="fa fa-remove"></i>';
// link add to li
li.appendChild(link);

// append li to ul
document.querySelector('ul.collection').appendChild(li);



console.log(link);
console.log(li);
console.log(text);