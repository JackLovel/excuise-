import {readFile, writeFile} from 'node:fs/promises'
import '@dotenvx/dotenvx/config'

export  const getTodos = async (_req, res) => {
    const todosData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todosData)
    return res.status(200).json(todos)
}

export const  getTodoById = async (req, res) => {
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
}

export const deleteTodo = async (req, res) => {
    const todoData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todoData)
    const todoId = req.params.todoId
    const filterTodos = todos.filter((todo) => todo.id !== Number(todoId))

    await writeFile('./data.json', JSON.stringify(filterTodos), 'utf-8')
    return res.status(200).json({
        message: 'todo deleted success!'
    })
}

export const addTodo = async (req, res) => {
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
}

export const updateTodo =  async (req, res) => {
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
}
