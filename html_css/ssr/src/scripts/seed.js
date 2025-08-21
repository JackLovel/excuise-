import { readFile } from 'node:fs/promises'
import seq from '../util/dbHelper.js'
import Todo from '../models/todoModel.js'


try {
    const initalizeTodosString = await readFile("./src/scripts/data/initdata.json", 'utf-8')

    const initializeTodos = JSON.parse(initalizeTodosString)
    await seq.authenticate();
    await Todo.sync({
        force: true
    })
    const todos = await Todo.bulkCreate(initializeTodos)
    console.log(JSON.stringify(todos, null, 2))
} catch (error) {
    console.log(error.message)
} finally {
    seq.close();
}
