import { DataTypes } from "sequelize";
import seq from "../util/dbHelper.js";

const Todo = seq.define(
    'Todo',
    {
        id: {
            type: DataTypes.BIGINT,
            primaryKey: true,
        },
        title: {
            type: DataTypes.TEXT,
            allowNull: false,
        },
        content: {
            type: DataTypes.TEXT,
            allowNull: false,
        },
        tag: {
            type: DataTypes.TEXT,
            allowNull: false,
        },
    }, {
    tableName: 'todo',
    createdAt: false,
    updatedAt: false,
}
)
export default Todo;
