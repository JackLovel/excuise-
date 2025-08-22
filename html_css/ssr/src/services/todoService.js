import '@dotenvx/dotenvx/config'
import Todo from '../models/todoModel';
export async function getAllTodos() {
    const todosData = await Todo.findAll();
    return todosData
}
export async function getTodoByIdApi(todoId) {
    const todo = await Todo.findOne({
        where: {
            id: todoId
        },
    });
    return todo
}
export async function deleteTodoByIdApi(todoId) {
    await Todo.destroy({
        where: {
            id: Number(todoId),
        },
    });
}
export async function createTodoApi(newTodo) {
    await Todo.create({
        content: newTodo.content,
        tag: newTodo.tag,
        title: newTodo.title,
    });
}
export async function updateTodoApi(updateTodo) {
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
}
