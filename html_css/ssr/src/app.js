import express from 'express'
import cors from 'cors'
import router from './routers/TodoRoutes.js'

const app = express()
app.use(cors())
app.use(express.json()) // parse json
app.use('/v1', router)
export default app;
