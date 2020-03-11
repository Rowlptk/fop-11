let val;

const today = new Date();
let birthday = new Date('9-10-1981 11:25:00');

birthday = new Date(1981, 8, 10, 11, 25, 45, 996);

birthday = new Date(-10000000000000);

//0 ==> 1970 jan 1

val = today.getMonth() + 1;
val = today.getDate();
val = today.getDay() + 1;
val = today.getFullYear();
val = today.getHours();
val = today.getMinutes();
val = today.getSeconds();
val = today.getMilliseconds();
val = today.getTime();


val = birthday.setFullYear(2021);

// ===, !==
// ==, !=

const id = 100;
if(id === '100')
{
    console.log('Correct');
}
else
{
    console.log('Incorrect');
}



console.log(val);
console.log(today);
console.log(birthday);
