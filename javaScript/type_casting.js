let val;

// Number to string
val = String(5);
val = String(4+4);
// Bool to String
val = String(true);
// Date to string
val = String(new Date());
// Array to String
val = String([1,2,3,4]);

// toString()
val = (5).toString();
val = (true).toString();

// String to number
val = Number('5');
val = Number(true);
val = Number(false);
val = Number(null);
val = Number('hello'); // NaN ==> not a number
val = Number([1,2,3]);

val = parseInt('100.30');
//val = parseFloat('100.30');

console.log(val);
console.log(typeof val);


const val1 = String(5);
const val2 = 6;
const sum = Number(val1 + val2);

console.log(sum);

let sum1 = '5'+6+7;
let sum2 = 5 + 6 + '7';

console.log(sum1,sum2);

