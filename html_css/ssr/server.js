import express, { response } from 'express'
import {readFile} from 'node:fs/promises'

const app = express()
const port = 3001
app.get('/', (req, res) => {
    console.dir(req.params)
    res.send('hahh12121212as')
})
app.get('/todos', async (_req, res) => {
    const todosData = await readFile('./data.json', 'utf-8')
    const todos = JSON.parse(todosData)
    return res.status(200).json(todos)
})

app.get('/:namex', async (req, res) => {
    const name = req.params.namex
    if (!name) {
        res.status(400).send(`400 bad request`)
        return
    }
    const idodataText = await readFile('./data.json', 'utf-8')
    const idolData = JSON.parse(idodataText)
    const result = idolData.data.find(
        (i) => i.name.toLowerCase() === name.toLowerCase()
    )

    if (!result) {
        return response.status(404).send('404 not found')
    }
    res.send(result)
})

app.listen(port, () => {
    console.log(`run http:localhost:/${port}`)
})

app
