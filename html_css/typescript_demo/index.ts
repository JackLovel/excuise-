const obj = {
    width: 10,
    height: 15
};
const area = obj.width * obj.height;
const a = 1;

let c: string = "1";
let b: number = 1;
let z: any

function count(x:number, y:number): number {
    return x + y;
}

console.log(count(1,2))
console.log(typeof a)

let person: {
    name: string,
    age?: number
}
person = {name: 'tom', age: 18}
console.log(person)

// array
let arr: string[]

// enum
enum Direction {
    Up,
    Down,
    Left,
}

// type
type Status = number | string

function printStatus(data: Status): void {
    console.log(data)
}

printStatus("1")

type Area = {
    height: number;
    width: number;
}

type Address = {
    num: number,
    cell: number,
    room: string
}

type House = Area & Address
const house : House = {
    height: 100,
     width: 100,
     num: 3,
     cell: 4,
     room: '702'
}

console.log(house)



class Person {
    constructor(public name: string, public age: number) { }
    speak() {
        console.log(`call me ${this.name} and age is ${this.age}`)
    }
}

const p1 = new Person('z3', 18)
console.log(p1)
p1.speak()

class Student extends Person {
    constructor(name: string, age: number, public grade: string) {
        super(name, age)
    }
    study() {
        console.log(`${this.name} 正在努力中。。。。`)
    }
}

const s1 = new Student('li', 14, '1')
s1.study()


abstract class Package {
    constructor(public weight: number) {}
    abstract calculate(): number
    printPackage() {
        console.log(`weight: ${this.weight}, cal: ${this.calculate()} yuan`)
    }
}
