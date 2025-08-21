import '@dotenvx/dotenvx/config'
import Todo from '../models/todoModel';
export async function getTodos(_req, res) {
    const todosData = await Todo.findAll();
    return res.status(200).json(todosData)
}
export async function getTodoById(req, res) {
    const todoId = req.params.todoId
    const todo = Todo.findAll({
        where: {
            id: Number(todoId),
        },
    });
    if (todo) {
        return res.status(200).json(todo)
    }
    return res.status(404).send(
        '404 not found'
    )
}
export async function deleteTodo(req, res) {
    const todoId = req.params.todoId
    await Todo.destroy({
        where: {
            id: Number(todoId),
        },
    });
    return res.status(200).json({
        message: 'todo deleted success!'
    })
}
export async function addTodo(req, res) {
    const addTodo = req.body
    if (!addTodo) {
        return res.status(404).json({
            message: 'Bad request'
        })
    }
    await Todo.create({
        content: addTodo.content,
        tag: addTodo.tag,
        title: addTodo.title,
    });
    return res.status(404).json({
        message: 'todo added success'
    })
}
export async function updateTodo(req, res) {
    const updateTodo = req.body
    await Todo.update(
        {
            title: updateTodo.title,
            content: updateTodo.content,
            tag: updateTodo.tag,
        },
        {
            where: {
                id: updateTodo.id,
            },
        },
    );
    return res.status(404).json({
        message: 'todo update success'
    })
}
