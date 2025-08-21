import app from "./app.js"
const port = process.env.port
import { DataTypes, Sequelize } from "sequelize";

const databaseConfig = {
    username: process.env.DB_USER,
    password: process.env.DB_PASSWORD,
    host: process.env.DB_HOST,
    port: process.env.password,
    database: process.env.DB_NAME,
}

// 連接 postdb
const sequelize = new Sequelize(databaseConfig.database, databaseConfig.username, databaseConfig.password, {
  host: databaseConfig.host,
  dialect: "postgres",
  logging: false,
});

async function connectDB() {
  try {
    await sequelize.authenticate();
    console.log("✅ Connection to postdb has been established successfully.");
  } catch (error) {
    console.error("❌ Unable to connect to the database:", error);
  }
}

connectDB();

const Todo = sequelize.define('todo',
    {
        id: {
            type: DataTypes.INTEGER,
            allowNull: false,
            primaryKey: true,
        },
        title: {
            type: DataTypes.STRING,
        },
        content: {
            type: DataTypes.STRING,
        },
        tag: {
            type: DataTypes.STRING,
        },
    }, {
        tableName: 'todo'
    }
)

const todos = await Todo.findAll()
app.listen(port, () => {
    console.log(`run http:localhost:${port}`)
})
