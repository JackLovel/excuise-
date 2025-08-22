import {readFile, writeFile} from 'node:fs/promises'
import '@dotenvx/dotenvx/config'
import  { getTodoByIdApi, getAllTodos,deleteTodoByIdApi, createTodoApi, updateTodoApi } from "../services/todoService"

export async function getTodos (_req, res) {
    const todos = await getAllTodos();
    return res.status(200).json(todos)
}

export const  getTodoById = async (req, res) => {
    const todoId = req.params.todoId
    if (!todoId) {
        return res.status(400).json('todoId is requred')
    }
    const todo = getTodoByIdApi(todoId)
    if (todo) {
        return res.status(200).json(todo)
    }
    return res.status(404).send(
        '404 not found'
    )
}

export const deleteTodoById = async (req, res) => {
    const todoId = req.params.todoId
    if (!todoId) {
        return res.status(400).send('todoid is required')
    }
    await deleteTodoByIdApi(todoId)
    return res.status(200).json({
        message: 'todo deleted success!'
    })
}

export const createTodo = async (req, res) => {
    const addTodo = req.body
    if (!addTodo) {
        return res.status(400).json({
            message: 'Bad request'
        })
    }
    const addedTodo = await createTodoApi(addTodo)

    return res.status(404).json({
        message: 'todo added success'
    })
}

export const updateTodo =  async (req, res) => {
    const updateTodo = req.body
    await updateTodoApi(updateTodo)
    return res.status(404).json({
        message: 'todo update success'
    })
}
