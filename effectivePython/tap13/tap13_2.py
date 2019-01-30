import json

def load_json_key(data, key):
    try:
        result_dict = json.loads(data)
    except ValueError as e:
        print('not json format')
    else:
        return result_dict[key]

if __name__ == '__main__':
    dict = '{"name": "ACME", "shares": 50, "price": 490.1}'
    key_v = load_json_key(dict, 'name')
    print(key_v)
