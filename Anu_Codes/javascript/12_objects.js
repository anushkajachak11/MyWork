//const tinderUser = new Object()//singleton object

const tinderUser = {}  //nonsingleton object
//console.log(tinderUser);

tinderUser.id = "1113qqwe";
tinderUser.email = "some@gmail.com";
tinderUser.name = "katha";
//console.log(tinderUser);

const regularUser = {
     email:"hgsf@gmail.com",
     fullname:{
        userFullname:{
            firstName:"Anushka",
            lastName:"Jachak",
         }
     }

}
console.log(regularUser.fullname.userFullname.firstName);
console.log(regularUser.email);


const obj1 = {2:"a",5:"b"};
const obj2 = {6:"a",7:"b"};
const obj3 = {8:"a",9:"b"};

//const obj4 ={obj1,obj2,obj3};
//const obj4 = Object.assign({},obj1,obj2,obj3);

const obj4 = {...obj1,...obj2,...obj3}; //use karaycha
console.log(obj4);

const users = [
    {
        id:9,
        email:"gfhg@gmail.com",
    }
    {
        id:59,
        email:"gfhg@gmail.com",
    }
    {
        id:5,
        email:"gfhg@gmail.com",
    }
]