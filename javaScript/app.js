// Log to console
console.log('Hello World!');
console.log(123);
console.log(true);

var greetings = 'Hello';
console.log(greetings);
console.log([1,2,3,4]);
console.log({a:1, b:2});
console.table({a:1, b:2});

console.warn('This is some warning');
console.error('This is some error');
console.clear();

/*
Multi
line
comment 
*/

// ------------------------------------------------------------
// var, let, const
let data = 'Hello';
console.log(data);
data = 123;
console.log(data);

const pi = 3.1415
console.log(pi);
//pi = 4.12;
//console.log(pi);

// letters, numbers, _, $
//  Cannot Start with numbers
// Multiword ==> first name
// Camel case ==> firstName
// Pascal case ==> FirstName
// snake/underscore case ==> first_name
// lower case ==> firstname

// ---------------------------------------------------------------------
// Data types
// undefined
let val;
console.log(val);
console.log(typeof val);

// String
val = 'Ravan';
console.log(val);
console.log(typeof val);

// Number
val = 56.99;
console.log(val);
console.log(typeof val);

// Boolean
val = false;
console.log(val);
console.log(typeof val);

// null
val = null;
console.log(val);
console.log(typeof val);

// Array
val = ['movies','music','sports'];
console.log(val);
console.log(typeof val);

// Object literals
val = {
    city: 'Kathmandu', 
    state: 3
};
console.log(val);
console.log(typeof val);

// Date
val = new Date();
console.log(val);
console.log(typeof val);

// function
val = function(x) {
    alert("Hello "+x);
}
console.log(val);
console.log(val('Siman'));
console.log(typeof val);
