
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

create or replace procedure update_number(
    user_name varchar,
    user_number varchar
)
as $$

begin
    Update phonebook_lab11 set usernumber = user_number where username = user_name;
end;
$$
language plpgsql;
"""
)
config.commit()
current.close()
config.close()