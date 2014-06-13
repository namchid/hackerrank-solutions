f n [] = []
f n lst = concat $ map (\x -> replicate n x) lst