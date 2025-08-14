const obj = {
    width: 10,
    height: 15
};
const area = obj.width * obj.height;
const a = 1;
let c = "1";
let b = 1;
let z;
function count(x, y) {
    return x + y;
}
console.log(count(1, 2));
console.log(typeof a);
let person;
person = { name: 'tom', age: 18 };
console.log(person);
// array
let arr;
// enum
var Direction;
(function (Direction) {
    Direction[Direction["Up"] = 0] = "Up";
    Direction[Direction["Down"] = 1] = "Down";
    Direction[Direction["Left"] = 2] = "Left";
})(Direction || (Direction = {}));
function printStatus(data) {
    console.log(data);
}
printStatus("1");
const house = {
    height: 100,
    width: 100,
    num: 3,
    cell: 4,
    room: '702'
};
console.log(house);
class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
    speak() {
        console.log(`call me ${this.name} and age is ${this.age}`);
    }
}
const p1 = new Person('z3', 18);
console.log(p1);
p1.speak();
class Student extends Person {
    constructor(name, age, grade) {
        super(name, age);
        this.grade = grade;
    }
    study() {
        console.log(`${this.name} 正在努力中。。。。`);
    }
}
const s1 = new Student('li', 14, '1');
s1.study();
class Package {
    constructor(weight) {
        this.weight = weight;
    }
    printPackage() {
        console.log(`weight: ${this.weight}, cal: ${this.calculate()} yuan`);
    }
}
export {};
//# sourceMappingURL=index.js.map