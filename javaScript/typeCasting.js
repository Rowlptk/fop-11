let val;

// Number to String
val = String(5);
val = String(4+5);

val = String(true);
val = String([1,2,3,4])


// String To Number
val = Number('5');
val = Number(true);
val = Number(false);
val = Number(null);
val = Number('hello'); // NaN ==> Not a Number
val = Number([1,2,3]);

val = parseInt('100.39');
val = parseFloat('100.39');

const val1 = String(5);
const val2 = 6;
const sum = Number(val1+val2);

//'5'+6 ==> '56'==> 56

let sum1 = '5' + 6 + 7; // 513
let sum2 = 5 + 6 + '7' // 117

console.log(sum1, sum2);

console.log(val);
console.log(typeof val);

// math Object, Strings, template String, array, object, date/if/for(misc)
// dom ==> querySelector, create Element, relationship, events, event deligation