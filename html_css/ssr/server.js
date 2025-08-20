import express from 'express'
import {readFile, writeFile} from 'node:fs/promises'
import cors from 'cors'
import '@dotenvx/dotenvx/config'

const app = express()
app.use(cors())
app.use(express.json()) // parse json

// const port = 3001
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
app.delete('/todos/delete/:todoId', async (req, res) => {
    const todoData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todoData)
    const todoId = req.params.todoId
    const filterTodos = todos.filter((todo) => todo.id !== Number(todoId))

    await writeFile('./data.json', JSON.stringify(filterTodos), 'utf-8')
    return res.status(200).json({
        message: 'todo deleted success!'
    })
})

app.post('/todos/add', async (req, res) => {
    const todoData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todoData)
    const addTodo = req.body
    if (!addTodo) {
        return res.status(404).json({
            message: 'Bad request'
        })
    }

    const updatedTodos = [
        ...todos,
        addTodo
    ]

    await writeFile('./data.json', JSON.stringify(updatedTodos), 'utf-8')
    return res.status(404).json({
        message: 'todo added success'
    })
})

app.post('/todos/update', async (req, res) => {
    const todoData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todoData)
    const updateTodo = req.body
    //const parseUpdateTodo = JSON.parse(updateTodo)
    const updatedTodos = todos.map((todo) => {
        if (todo.id === parseUpdateTodo.id) {
            return {
                ...todo,
                ...parseUpdateTodo
            }
        }
        return todo;
    })
    await writeFile('./data.json', JSON.stringify(updatedTodos), 'utf-8')
    return res.status(404).json({
        message: 'todo update success'
    })
})

app.listen(process.env.port, () => {
    console.log(`run http:localhost:${process.env.port}`)
})

app
