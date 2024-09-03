FROM python:3.8
WORKDIR /app
COPY . /app
RUN pip install flask pymongo
CMD ["python", "/app/api/app.py"]