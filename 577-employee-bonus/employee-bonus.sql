# Write your MySQL query statement below
select Employee.name,Bonus.bonus
from Employee
LEFT JOIN Bonus
  USING (empId)
WHERE IFNULL(Bonus.bonus, 0) < 1000;