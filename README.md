# Neural Network System: Limbus Data

## Descripción del Proyecto
Este proyecto desarrolla un sistema de motor de base de datos avanzado integrado con funcionalidades de sinapsis, diseñado para simular procesos neuronales en la gestión y almacenamiento de datos. El sistema utiliza C++ para el backend y MongoDB para la gestión de datos, con capacidades extendidas de sharding y replicación para mejorar la escalabilidad y la disponibilidad.

## Estructura del Proyecto
El sistema está estructurado en varios componentes clave que facilitan su configuración, desarrollo y despliegue:

- **/src**: Contiene los archivos C++ que implementan la lógica del motor de base de datos y las operaciones neuronales.
- **/include**: Alberga las librerías y headers, incluyendo `json.hpp` para la manipulación de JSON en C++.
- **/scripts**: Incluye scripts para configuración y mantenimiento, como `setup_mongo.sh` para configurar MongoDB.
- **/api**: Código Python para la API del backend y CLI, facilitando la interacción programática con el sistema.
- **/web**: Frontend compuesto por HTML y JavaScript para interacción del usuario.
- **Dockerfile y docker-compose.yml**: Utilizados para la contenerización y orquestación del despliegue del sistema.
- **/config**: Configuraciones específicas, como `mongodb_config.js` para los ajustes de MongoDB.
- **README.md**: Documentación del proyecto.

## Características Principales

### Motor de Base de Datos Neuronal
- Implementa un modelo de datos basado en neuronas y sinapsis para simular interacciones neuronales.
- Desarrollado en C++, proporciona una base sólida y eficiente para operaciones complejas de datos.

### Integración con MongoDB
- Utiliza MongoDB para almacenar y gestionar estructuras de datos complejas con eficiencia.
- Configurado con sharding y replicación para garantizar la escalabilidad y la alta disponibilidad de los datos.

### API y CLI
- Incluye una API desarrollada en Flask para facilitar las interacciones backend.
- Una interfaz de línea de comandos (CLI) permite operaciones manuales y automatizadas.

### Frontend Web
- Una interfaz de usuario web básica para visualizar y interactuar con el sistema.

## Despliegue
El proyecto utiliza Docker para facilitar el despliegue y la gestión. Para iniciar el sistema:

```bash
docker-compose up --build
