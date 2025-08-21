
import { Sequelize } from "sequelize";
const databaseConfig = {
  username: process.env.DB_USER,
  password: process.env.DB_PASSWORD,
  host: process.env.DB_HOST,
  port: process.env.port,
  database: process.env.DB_NAME,
}
// 連接 postdb
const seq = new Sequelize(
  databaseConfig.database,
  databaseConfig.username,
  databaseConfig.password, {
  host: databaseConfig.host,
  dialect: "postgres",
  logging: false,
});

export default seq;
