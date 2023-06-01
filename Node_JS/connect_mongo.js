const { MongoClient } = require('mongodb');

const url = 'mongodb://127.0.0.1:27017';
const clinet = new MongoClient(url);

const dbName = 'e-comm';

async function getData()
{
    let result = await clinet.connect();
    console.log('Connected successfully to server');

    let db = result.db('sample_mflix');
    let collection = db.collection('movies');
    let response = await collection.find({}).toArray();
    console.log(response);
}

getData();