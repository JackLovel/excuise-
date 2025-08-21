import app from "./app.js"
import seq from "./util/dbHelper.js"
const port = process.env.port
seq.authenticate()
    .then(() => console.log('db connected'))
    .catch((err) => console.error('db connected error', err))

app.listen(port, () => {
    console.log(`run http:localhost:${port}`)
})
