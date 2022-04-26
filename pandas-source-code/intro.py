import pandas as pd
import numpy as np

df_data = {
    'col1': np.random.rand(5),
    'col2': np.random.rand(5),
    'col3': np.random.rand(5)
}

df = pd.DataFrame(df_data)

#print(df[:1])

print(df[['col1', 'col2']])