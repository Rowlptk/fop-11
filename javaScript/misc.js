let val;

const today = new Date();
let birthday = new Date('9-10-1981 11:25:00');
birthday = new Date(2000, 0, 5, 13, 05, 43, 986);

birthday = new Date(-10000000000000);

// 0 ms ==> 1970 jan 1 5:30

val = today.getMonth() + 1 ;
val = today.getDate();
val = today.getDay() + 1;
val = today.getFullYear();
val = today.getHours();
val = today.getMinutes();
val = today.getSeconds();
val = today.getMilliseconds();
val = today.getTime();

// conditions, ==, ===, !=, !==
const id = 100;
if(id === '100')
{
    console.log('correct');
} else {
    console.log('Incorrect');
}

function myClock()
{
    let date = new Date();
    document.querySelector('h1').innerHTML = date.toLocaleTimeString();
}


// DOM Manipulation ==>  2 days
// selectors, class, id, css, text, html,
// parent, siblings, children, create Element, remove,
// forEach loop, events, deligation








console.log(val);
console.log(birthday);
console.log(today);