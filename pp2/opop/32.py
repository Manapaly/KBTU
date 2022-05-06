import psycopg2
  
config = psycopg2.connect(
        host='localhost', 
        database='postgres',
        port = '5433',
        user='postgres',
        password='321qaz'
        )
  
config.autocommit = True
cursor = config.cursor()
  
  
sql = '''COPY accounts(user_id,username,email)
FROM 'D:\pp\pp2\Lab11\data.csv'
DELIMITER ' '
CSV HEADER;'''
  
# cursor.execute(sql)
  
sql3 = '''select * from accounts;'''
cursor.execute(sql3)
for i in cursor.fetchall():
    print(i)
  
config.commit()
config.close()