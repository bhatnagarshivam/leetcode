# Write your MySQL query statement below
SELECT project.project_id,ROUND(avg(Employee.experience_years),2) AS average_years
FROM Project
INNER JOIN Employee
ON project.employee_id=Employee.employee_id
GROUP BY project.project_id;
