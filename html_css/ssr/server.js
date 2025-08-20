import express from 'express'
import cors from 'cors'
import '@dotenvx/dotenvx/config'
import router from './src/routers/TodoRoutes.js'

const app = express()
app.use(cors())
app.use(express.json()) // parse json
const port = process.env.port
app.use('', router)
app.listen(port, () => {
    console.log(`run http:localhost:${port}`)
})
app
