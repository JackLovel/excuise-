import express, { response } from 'express'
import {readFile, writeFile} from 'node:fs/promises'

const app = express()
const port = 3001
app.get('/', (req, res) => {
    console.dir(req.params)
    res.send('hahh12121212as')
})
app.get('/todos', async (_req, res) => {
    const todosData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todosData)
    return res.status(200).json(todos)
})

app.get('/todos/:todoId', async (req, res) => {
    const todoData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todoData)
    const todoId = req.params.todoId
    console.log('todos')
    console.log(todos)
    const todo = todos.find((todo) => todo.id === Number(todoId))
    if (todo) {
        return res.status(200).json(todo)
    }
    return res.status(404).send(
        '404 not found'
    )
})
app.get('/todos/delete/:todoId', async (req, res) => {
    const todoData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todoData)
    const todoId = req.params.todoId
    const filterTodos = todos.filter((todo) => todo.id !== Number(todoId))

    await writeFile('./data.json', JSON.stringify(filterTodos), 'utf-8')
    return res.status(200).json({
        message: 'todo deleted success!'
    })
})



app.listen(port, () => {
    console.log(`run http:localhost:/${port}`)
})

app
