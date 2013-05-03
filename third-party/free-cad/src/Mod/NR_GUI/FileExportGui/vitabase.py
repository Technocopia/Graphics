import xml.dom.minidom
def get_a_document(name="/the-technocopia-project/third-party/free-cad/src/Mod/NR_GUI/FileExportGui/vitamin.xml"):
    return xml.dom.minidom.parse(name)


class add_to_Database(string):
vitamin_element = vitamin.createElementNS("vitamin", "name")
vitamin.appendChild(vitamin_element)

class find_File_Location():