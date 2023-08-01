DELETE obj
FROM Person obj ,Person obj2 
WHERE obj.email=obj2.email
and obj.id>obj2.id