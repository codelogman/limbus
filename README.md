# Neural Network System: Limbus Data

## Project Description
This project develops an advanced database engine integrated with synaptic functionalities, designed to simulate neural processes in data management and storage. The system uses C++ for the backend and MongoDB for data management, with extended sharding and replication capabilities to enhance scalability and availability.

## Project Structure
The system is structured into several key components that facilitate its setup, development, and deployment:

- **/src**: Contains the C++ files implementing the database engine logic and neural operations.
- **/include**: Houses libraries and headers, including `json.hpp` for JSON manipulation in C++.
- **/scripts**: Includes scripts for setup and maintenance, such as `setup_mongo.sh` for configuring MongoDB.
- **/api**: Python code for the backend API and CLI, enabling programmatic interaction with the system.
- **/web**: Frontend composed of HTML and JavaScript for user interaction.
- **Dockerfile and docker-compose.yml**: Used for containerization and orchestration of system deployment.
- **/config**: Specific configurations, such as `mongodb_config.js` for MongoDB settings.
- **README.md**: Project documentation.

## Main Features

### Neuronal Database Engine
- Implements a neuron and synapse-based data model to simulate neural interactions.
- Developed in C++, providing a robust and efficient foundation for complex data operations.

### MongoDB Integration
- Uses MongoDB to efficiently store and manage complex data structures.
- Configured with sharding and replication to ensure data scalability and high availability.

### API and CLI
- Includes a Flask-developed API to facilitate backend interactions.
- A command-line interface (CLI) allows for manual and automated operations.

### Web Frontend
- A basic web user interface to visualize and interact with the system.

## Deployment
The project uses Docker to facilitate deployment and management. To start the system:

```bash
docker-compose up --build
