package com.epam.indigolucene.common.query;

import com.epam.indigolucene.common.exceptions.CommitException;
import com.epam.indigolucene.common.exceptions.DocumentAdditionException;
import com.epam.indigolucene.common.exceptions.RemoveException;

import java.io.Closeable;
import java.io.IOException;
import java.util.Collection;
import java.util.List;
import java.util.Map;

/**
 * Created by Artem Malykh on 21.03.16.
 */
public interface SolrConnection extends Closeable {
    void setUrl(String url);
    void setCoreName(String coreName);
    void setQuery(Query query);

    List<Map<String, Object>> results() throws Exception;

    void addDocument(Map<String, Object> fieldsMap) throws DocumentAdditionException;
    void commit() throws CommitException;
    void removeAll() throws RemoveException;
}
