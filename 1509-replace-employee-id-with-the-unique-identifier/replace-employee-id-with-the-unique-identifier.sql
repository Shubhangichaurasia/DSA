# Write your MySQL query statement below
select empu.unique_id,emp.name from employees as emp left join employeeUNI as empu on emp.id =empu.id;