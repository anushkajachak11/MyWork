const myArr= [0,1,2,3,4,5];
//console.log( myArr);

const myHeroine = ["Shradha","Alia","Ruta","Katha"]
//console.log( myHeroine);

const myArr2 =  new Array(1, 2, 3, 4)
//console.log(myArr[(1)]);

//Array Methods

//myArr.push(6);
//myArr.push(7);  //value ko add karta hai
//myArr.pop();   //last value ko remove karta hai
//myArr.unshift(8);
//myArr.shift();

//console.log(myArr.includes(32)); //true or false
//console.log(myArr.indexOf(37)); //-1

const newArr = myArr.join();
//console.log(myArr);
//console.log(newArr);  //Converts to string
//console.log(typeof newArr);


//slice , splice

console.log("A ", myArr);
const myn1 = myArr.slice(1,4); //slice mai last range include nhii hotti

console.log(myn1)
console.log("B", myArr);

const myn2 = myArr.splice(1,4); //splice mai last range include hotti hai
console.log("C", myArr);
console.log(myn2);  



