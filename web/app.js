function fetchNeurons() {
    fetch('http://localhost:5000/neurons')
        .then(response => response.json())
        .then(data => {
            const container = document.getElementById('neuron-data');
            container.innerHTML = '';
            data.forEach(neuron => {
                container.innerHTML += `<p>Neuron ID: ${neuron._id}, Details: ${JSON.stringify(neuron)}</p>`;
            });
        })
        .catch(error => console.error('Error:', error));
}