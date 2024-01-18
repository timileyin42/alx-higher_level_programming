-- Creates a table called hbtn_0c_0.temperatures with values city and name in my MySQL server.
CREATE TABLE IF NOT EXISTS temperatures (
	city VARCHAR(256),
	name VARCHAR(256),
	value DECIMAL(5,2)
);
