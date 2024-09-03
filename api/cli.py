import requests
import sys

def fetch_neuron(neuron_id):
    response = requests.get(f'http://localhost:5000/neurons/{neuron_id}')
    if response.status_code == 200:
        print(response.json())
    else:
        print("Error:", response.status_code)

if __name__ == "__main__":
    if len(sys.argv) > 1:
        fetch_neuron(sys.argv[1])
    else:
        print("Usage: python cli.py <neuron_id>")