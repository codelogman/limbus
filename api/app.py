from flask import Flask, request, jsonify
from pymongo import MongoClient

app = Flask(__name__)
client = MongoClient('mongodb://localhost:27017/')
db = client['neural_network']

@app.route('/neurons', methods=['POST'])
def add_neuron():
    neuron_data = request.json
    result = db.neurons.insert_one(neuron_data)
    return jsonify({'_id': str(result.inserted_id)}), 201

@app.route('/neurons/<neuron_id>', methods=['GET'])
def get_neuron(neuron_id):
    neuron = db.neurons.find_one({'_id': neuron_id})
    return jsonify(neuron), 200

if __name__ == '__main__':
    app.run(debug=True, port=5000)