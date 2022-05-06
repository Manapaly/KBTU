#create
import psycopg2

config = psycopg2.connect(
    host='localhost', 
    database='postgres',
    port = '5433',
    user='postgres',
    password='321qaz'
)

current = config.cursor()

current.execute(
    """
        CREATE TABLE accounts (
          user_id serial PRIMARY KEY,
          username VARCHAR (50) UNIQUE NOT NULL,
          email VARCHAR (255) UNIQUE NOT NULL
        );
        """,
)
config.commit()
current.close()
config.close()