import psycopg2

config = psycopg2.connect(
    host='localhost', 
    database='postgres',
    port = '5433',
    user='postgres',
    password='321qaz'
)
current = config.cursor()
sql1 = '''
    CREATE TABLE phonebook(
        id INTEGER PRIMARY KEY,
        name VARCHAR(200),
        surname VARCHAR (50),
        number VARCHAR(200)
    )
'''

current.execute(sql1)

# final = current.fetchall()
# print(final)

current.close()
config.commit()
config.close()
