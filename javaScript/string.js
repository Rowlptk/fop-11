const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'Hello there my name is Brad';
const tags = 'web design,web development, programming';

let val;

// Concatenation

val = firstName + lastName;
val = firstName+ ' ' + lastName;

// Append
val = 'Brad';
val += 'Traversy' //==> val = val + 'Traversy';

val = 'Hello, my name is ' + firstName + ' and I am ' + age;

// Escaping
val = 'That\'s awesome, I can\'t wait ';

// Length
val = firstName.length;

// concat()
val = firstName.concat(' ', lastName);

// Change case
val = firstName.toLowerCase();
val = firstName.toUpperCase();

// william
val = firstName[2];

// indexOf()
val = firstName.indexOf('l');
val = firstName.lastIndexOf('l');

// charAt();
val = firstName.charAt('2');

// Get last char
val = firstName.charAt(firstName.length - 1);

//const firstName = 'William';
// Slice
val = firstName.slice(0,4);
val = firstName.slice(-6,-2);
val = firstName.slice(1);

// split();
val = str.split(' ');
val = tags.split(',');
val = str.split('');


 let str1 = 'my name is brad , Brad brad Brad bRad BRaD';
 
 val = str1.replace('brad','nissan');
 val = str1.replace(/brad/gi,'nissan');
// replace

console.log(val);

