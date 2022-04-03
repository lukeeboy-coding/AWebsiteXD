import express from "express";
const server = express();

server.use(express.json());

server.get("/hi", (req, res) => {
    res.send("Hi!")
})
// this sets a port for the client,(a.k.a client.ts) in this case.
server.listen("localhost:8000");