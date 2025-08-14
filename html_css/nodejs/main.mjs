import {readFile,writeFile} from 'node:fs/promises'

const data = await readFile('./data.json', "utf-8")
console.log(data)

await writeFile("1.json", "kkk", "utf-8")
