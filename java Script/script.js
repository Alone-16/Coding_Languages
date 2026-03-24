const mySym = Symbol("key1");

const JsUser = {
    name: "Alone",
    "full name": "Alone", 
    [mySym]: "mykey1",
    age: 18,
    location: "Jaipur",
    email: "nadeem.work.16@gmail.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(JsUser.email);
// console.log(JsUser["email"]);
// console.log(JsUser["full name"]);
// console.log(JsUser[mySym]);

JsUser.greeting = function(){
    console.log("Hello JS Users");
}

JsUser.greetingTwo = function(){
   console.log(`Hello Js user, ${this.name}`);
}

// console.log(JsUser.greeting());
// console.log(JsUser.greetingTwo());

// const tinderUser = new Object()
const tinderUser = {}

tinderUser.id = "123abc"
tinderUser.name = "Sammy"
tinderUser.isLoggedIn = false 

// console.log(tinderUser);

const regularUser = {
    email: "some@gamil.com",
    fullname: {
        userfullname: {
            firstname: "Mr",
            lastname: "Alone"
        }
    }
}

// console.log(regularUser.fullname.userfullname.lastname);

const obj1 = {1: "a", 2: "b"}
const obj2 = {3: "a", 4: "b"}

const obj3 = Object.assign({}, obj1, obj2) // {} optional
const obj3_2 = {...obj1, ...obj2}

// console.log(obj3);

// how data will come in document
const users = [
    {
        id: 1,
        email: "a@gmail.com"
    },
    {
        id: 2,
        email: "b@gmail.com"
    },

]

// users[1].email
console.log(tinderUser);

console.log(Object.keys(tinderUser));

