import express from 'express'
import '@dotenvx/dotenvx/config'
import { addTodo, deleteTodo, getTodoById, getTodos, updateTodo } from '../controllers/TodoController.js';
const router = express.Router();
router.route('/todos').get(getTodos).post(addTodo).patch(updateTodo)
router.route('/todos/:todoId').get(getTodoById).delete(deleteTodo);

export default router
