import { createInterface } from "node:readline/promises";
import { stdin, stdout } from "node:process";

const readline = createInterface({
    input: stdin,
    output: stdout
})

const name = await readline.question('what your name\n ?')
const age = await readline.question('how old are you?\n ?')

const birthYear = new Date().getFullYear() - age;
const answer = await readline.question(
    `welcome ${name}, you birth year is ${birthYear} right? (y/n)\n`
)

if (answer[0].toUpperCase() !== 'Y') {
    console.log(`I know, your were bron at ${birthYear - 1}!`)
}
readline.close()

