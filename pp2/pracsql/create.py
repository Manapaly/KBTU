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
    '''
    CREATE TABLE PhoneBook(
        id VARCHAR(20),
        username VARCHAR(20),
        number VARCHAR(12),
        email VARCHAR(30),
        address VARCHAR(30)
    )
    '''
)
config.commit()
current.close()
config.close()